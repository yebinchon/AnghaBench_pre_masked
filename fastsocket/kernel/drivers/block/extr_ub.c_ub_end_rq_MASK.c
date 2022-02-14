
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {unsigned int errors; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int) ;

__attribute__((used)) static void FUNC_1(struct request *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 if (VAR_2 == 0) {
  VAR_3 = 0;
 } else {
  VAR_3 = -VAR_0;
  VAR_1->errors = VAR_2;
 }
 FUNC_0(VAR_1, VAR_3);
}
