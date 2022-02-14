
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger_log {scalar_t__ w_off; scalar_t__ buffer; scalar_t__ size; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;
 size_t FUNC_2 (size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct logger_log *VAR_0, const void *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0->size - VAR_0->w_off);
 FUNC_1(VAR_0->buffer + VAR_0->w_off, VAR_1, VAR_3);

 if (VAR_2 != VAR_3)
  FUNC_1(VAR_0->buffer, VAR_1 + VAR_3, VAR_2 - VAR_3);

 VAR_0->w_off = FUNC_0(VAR_0->w_off + VAR_2);

}
