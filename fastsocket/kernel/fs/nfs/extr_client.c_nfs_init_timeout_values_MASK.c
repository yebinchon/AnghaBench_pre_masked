
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_timeout {unsigned int to_initval; unsigned int to_retries; int to_increment; void* to_maxval; int to_exponential; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;




__attribute__((used)) static void FUNC_1(struct rpc_timeout *VAR_7, int VAR_8,
        unsigned int VAR_9, unsigned int VAR_10)
{
 VAR_7->to_initval = VAR_9 * VAR_0 / 10;
 VAR_7->to_retries = VAR_10;

 switch (VAR_8) {
 case 129:
 case 130:
  if (VAR_7->to_retries == 0)
   VAR_7->to_retries = VAR_1;
  if (VAR_7->to_initval == 0)
   VAR_7->to_initval = VAR_2 * VAR_0 / 10;
  if (VAR_7->to_initval > VAR_5)
   VAR_7->to_initval = VAR_5;
  VAR_7->to_increment = VAR_7->to_initval;
  VAR_7->to_maxval = VAR_7->to_initval + (VAR_7->to_increment * VAR_7->to_retries);
  if (VAR_7->to_maxval > VAR_5)
   VAR_7->to_maxval = VAR_5;
  if (VAR_7->to_maxval < VAR_7->to_initval)
   VAR_7->to_maxval = VAR_7->to_initval;
  VAR_7->to_exponential = 0;
  break;
 case 128:
  if (VAR_7->to_retries == 0)
   VAR_7->to_retries = VAR_3;
  if (!VAR_7->to_initval)
   VAR_7->to_initval = VAR_4 * VAR_0 / 10;
  if (VAR_7->to_initval > VAR_6)
   VAR_7->to_initval = VAR_6;
  VAR_7->to_maxval = VAR_6;
  VAR_7->to_exponential = 1;
  break;
 default:
  FUNC_0();
 }
}
