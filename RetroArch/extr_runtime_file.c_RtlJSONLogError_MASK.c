
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ byte; scalar_t__ column; scalar_t__ line; int member_2; int member_1; int member_0; } ;
struct TYPE_5__ {scalar_t__ writer; scalar_t__ parser; } ;
typedef TYPE_1__ RtlJSONContext ;
typedef TYPE_2__ JSON_Location ;
typedef scalar_t__ JSON_Error ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static void FUNC_5(RtlJSONContext *VAR_1)
{
   if (VAR_1->parser && FUNC_1(VAR_1->parser) != VAR_0)
   {
      JSON_Error VAR_2 = FUNC_1(VAR_1->parser);
      JSON_Location VAR_3 = { 0, 0, 0 };

      (void)FUNC_2(VAR_1->parser, &VAR_3);
      FUNC_4("Error: Invalid JSON at line %d, column %d (input byte %d) - %s.\n",
            (int)VAR_3.line + 1,
            (int)VAR_3.column + 1,
            (int)VAR_3.byte,
            FUNC_0(VAR_2));
   }
   else if (VAR_1->writer && FUNC_3(VAR_1->writer) != VAR_0)
   {
      FUNC_4("Error: could not write output - %s.\n", FUNC_0(FUNC_3(VAR_1->writer)));
   }
}
