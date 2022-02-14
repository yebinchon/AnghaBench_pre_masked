
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1251 {int * mbox_ptr; } ;
typedef int events_vector ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct wl1251*,int ,int*,int) ;

int FUNC_4(struct wl1251 *VAR_2, u32 VAR_3, int VAR_4)
{
 u32 VAR_5, VAR_6;
 unsigned long VAR_7;

 VAR_7 = VAR_1 + FUNC_0(VAR_4);

 do {
  if (FUNC_2(VAR_1, VAR_7))
   return -VAR_0;

  FUNC_1(1);


  FUNC_3(VAR_2, VAR_2->mbox_ptr[0], &VAR_5,
    sizeof(VAR_5));
  VAR_6 = VAR_5 & VAR_3;
  FUNC_3(VAR_2, VAR_2->mbox_ptr[1], &VAR_5,
    sizeof(VAR_5));
  VAR_6 |= VAR_5 & VAR_3;
 } while (!VAR_6);

 return 0;
}
