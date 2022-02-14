
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _reent {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {size_t head; size_t tail; char* buf; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;

__attribute__((used)) static ssize_t FUNC_1(struct _reent *VAR_1, void *VAR_2, char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5 = VAR_4;
 while ( VAR_5 > 0 ) {
  if (VAR_0.head != VAR_0.tail) {
   char VAR_6 = VAR_0.buf[VAR_0.head];
   *VAR_3++ = VAR_6;
   if (&FUNC_0 != ((void*)0)) FUNC_0(VAR_6);
   VAR_0.head++;
   VAR_5--;
  }
 }
 return VAR_4;
}
