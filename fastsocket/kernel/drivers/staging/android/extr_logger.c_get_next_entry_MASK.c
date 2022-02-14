
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger_log {int dummy; } ;


 size_t FUNC_0 (struct logger_log*,size_t) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static size_t FUNC_2(struct logger_log *VAR_0, size_t VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;

 do {
  size_t VAR_4 = FUNC_0(VAR_0, VAR_1);
  VAR_1 = FUNC_1(VAR_1 + VAR_4);
  VAR_3 += VAR_4;
 } while (VAR_3 < VAR_2);

 return VAR_1;
}
