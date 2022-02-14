
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int data2; int data1; int type; } ;
typedef TYPE_1__ pmi_message_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 long VAR_1 ;
 long FUNC_1 (long) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(int VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 pmi_message_t VAR_5;



 VAR_5.type = VAR_0;
 VAR_5.data1 = FUNC_0(VAR_2);
 VAR_5.data2 = VAR_3;




 FUNC_2(VAR_5);







 VAR_4 = VAR_5.data2;
 FUNC_3("PMI returned slow mode %d\n", VAR_4);

 return VAR_4;
}
