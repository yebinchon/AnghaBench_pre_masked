
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sd {TYPE_1__* sensor; } ;
struct TYPE_7__ {int (* probe ) (struct sd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*) ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (struct sd*) ;
 int FUNC_6 (struct sd*) ;

__attribute__((used)) static int FUNC_7(struct sd *VAR_7)
{

 VAR_7->sensor = &VAR_4;
 if (!VAR_7->sensor->probe(VAR_7))
  return 0;


 VAR_7->sensor = &VAR_1;
 if (!VAR_7->sensor->probe(VAR_7))
  return 0;


 VAR_7->sensor = &VAR_5;
 if (!VAR_7->sensor->probe(VAR_7))
  return 0;


 VAR_7->sensor = &VAR_3;
 if (!VAR_7->sensor->probe(VAR_7))
  return 0;


 VAR_7->sensor = &VAR_2;
 if (!VAR_7->sensor->probe(VAR_7))
  return 0;


 VAR_7->sensor = &VAR_6;
 if (!VAR_7->sensor->probe(VAR_7))
  return 0;


 FUNC_0("Failed to find a sensor");
 VAR_7->sensor = ((void*)0);
 return -VAR_0;
}
