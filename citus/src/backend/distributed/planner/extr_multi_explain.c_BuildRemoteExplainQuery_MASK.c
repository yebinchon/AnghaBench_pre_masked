
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; scalar_t__ summary; scalar_t__ timing; scalar_t__ buffers; scalar_t__ costs; scalar_t__ verbose; scalar_t__ analyze; } ;
typedef int StringInfo ;
typedef TYPE_1__ ExplainState ;





 int FUNC_0 (int ,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static StringInfo
FUNC_2(char *VAR_0, ExplainState *VAR_1)
{
 StringInfo VAR_2 = FUNC_1();
 char *VAR_3 = ((void*)0);

 switch (VAR_1->format)
 {
  case 129:
  {
   VAR_3 = "XML";
   break;
  }

  case 130:
  {
   VAR_3 = "JSON";
   break;
  }

  case 128:
  {
   VAR_3 = "YAML";
   break;
  }

  default:
  {
   VAR_3 = "TEXT";
   break;
  }
 }

 FUNC_0(VAR_2,
      "EXPLAIN (ANALYZE %s, VERBOSE %s, "
      "COSTS %s, BUFFERS %s, TIMING %s, SUMMARY %s, "
      "FORMAT %s) %s",
      VAR_1->analyze ? "TRUE" : "FALSE",
      VAR_1->verbose ? "TRUE" : "FALSE",
      VAR_1->costs ? "TRUE" : "FALSE",
      VAR_1->buffers ? "TRUE" : "FALSE",
      VAR_1->timing ? "TRUE" : "FALSE",
      VAR_1->summary ? "TRUE" : "FALSE",
      VAR_3,
      VAR_0);

 return VAR_2;
}
