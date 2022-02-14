
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_buffer {scalar_t__ state; int wait; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct uvc_buffer *VAR_4, int VAR_5)
{
 if (VAR_5) {
  return (VAR_4->state != VAR_2 &&
   VAR_4->state != VAR_1 &&
   VAR_4->state != VAR_3)
   ? 0 : -VAR_0;
 }

 return FUNC_0(VAR_4->wait,
  VAR_4->state != VAR_2 &&
  VAR_4->state != VAR_1 &&
  VAR_4->state != VAR_3);
}
