
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_error_log {scalar_t__ extended_log_length; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(char * VAR_1)
{
 int VAR_2;
 struct rtas_error_log *VAR_3;


 VAR_2 = 8;
 VAR_3 = (struct rtas_error_log *)VAR_1;
 if (VAR_3->extended_log_length) {


  VAR_2 += VAR_3->extended_log_length;
 }

 if (VAR_0 == 0)
  VAR_0 = FUNC_0();

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 return VAR_2;
}
