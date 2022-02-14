
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct b43_wldev {TYPE_1__* dfsentry; } ;
typedef int ssize_t ;
struct TYPE_2__ {unsigned int mmio32read_next; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,unsigned int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct b43_wldev *VAR_2,
         char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5 = 0;
 unsigned int VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_2->dfsentry->mmio32read_next;
 if (VAR_6 > VAR_0)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_2, VAR_6);
 FUNC_1("0x%08X\n", VAR_7);

 return VAR_5;
}
