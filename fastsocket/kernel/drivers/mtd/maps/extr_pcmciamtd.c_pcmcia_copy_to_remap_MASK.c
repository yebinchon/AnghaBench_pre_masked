
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmciamtd_dev {unsigned long win_size; } ;
struct map_info {scalar_t__ map_priv_1; } ;
typedef int ssize_t ;
typedef void const* caddr_t ;


 int FUNC_0 (int,char*,void const*,void const*,int) ;
 int FUNC_1 (void const*,void const*,int) ;
 void* FUNC_2 (struct map_info*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct map_info *VAR_0, unsigned long VAR_1, const void *VAR_2, ssize_t VAR_3)
{
 struct pcmciamtd_dev *VAR_4 = (struct pcmciamtd_dev *)VAR_0->map_priv_1;
 unsigned long VAR_5 = VAR_4->win_size;

 FUNC_0(3, "to = %lu from = %p len = %u", VAR_1, VAR_2, VAR_3);
 while(VAR_3) {
  int VAR_6 = VAR_5 - (VAR_1 & (VAR_5-1));
  caddr_t VAR_7;

  if(VAR_6 > VAR_3)
   VAR_6 = VAR_3;

  VAR_7 = FUNC_2(VAR_0, VAR_1);
  if(!VAR_7)
   return;

  FUNC_0(4, "memcpy from %p to %p len = %d", VAR_2, VAR_7, VAR_6);
  FUNC_1(VAR_7, VAR_2, VAR_6);
  VAR_3 -= VAR_6;
  VAR_1 += VAR_6;
  VAR_2 += VAR_6;
 }
}
