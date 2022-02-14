
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (struct cx18*,int ,int ,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static long FUNC_1(struct file *VAR_5, void *VAR_6, int VAR_7, void *VAR_8)
{
 struct cx18 *VAR_9 = ((struct cx18_open_id *)VAR_6)->cx;

 switch (VAR_7) {
 case 128: {
  u32 VAR_10 = *(u32 *)VAR_8;

  if ((VAR_10 == 0) || (VAR_10 & 0x01))
   FUNC_0(VAR_9, VAR_1, VAR_3, VAR_4,
         (u32) VAR_0);
  break;
 }

 default:
  return -VAR_2;
 }
 return 0;
}
