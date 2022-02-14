
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {scalar_t__ map_priv_1; } ;
typedef int ssize_t ;
typedef int __u8 ;


 unsigned long FUNC_0 (struct map_info*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct map_info *VAR_0, void *VAR_1,
         unsigned long VAR_2, ssize_t VAR_3)
{
 VAR_2 = FUNC_0(VAR_0, VAR_2);
 while(VAR_3--)
  *(__u8 *) VAR_1++ = *(__u8 *)(VAR_0->map_priv_1 + VAR_2++);
}
