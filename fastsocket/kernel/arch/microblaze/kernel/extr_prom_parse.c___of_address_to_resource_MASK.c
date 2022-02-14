
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct resource {unsigned long start; unsigned int flags; int name; scalar_t__ end; } ;
struct device_node {int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct resource*,int ,int) ;
 scalar_t__ FUNC_1 (struct device_node*,int const*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_4, const u32 *VAR_5,
    u64 VAR_6, unsigned int VAR_7,
    struct resource *VAR_8)
{
 u64 VAR_9;

 if ((VAR_7 & (VAR_1 | VAR_2)) == 0)
  return -VAR_0;
 VAR_9 = FUNC_1(VAR_4, VAR_5);
 if (VAR_9 == VAR_3)
  return -VAR_0;
 FUNC_0(VAR_8, 0, sizeof(struct resource));
 if (VAR_7 & VAR_1) {
  unsigned long VAR_10;
  VAR_10 = -1;
  if (VAR_10 == (unsigned long)-1)
   return -VAR_0;
  VAR_8->start = VAR_10;
  VAR_8->end = VAR_10 + VAR_6 - 1;
 } else {
  VAR_8->start = VAR_9;
  VAR_8->end = VAR_9 + VAR_6 - 1;
 }
 VAR_8->flags = VAR_7;
 VAR_8->name = VAR_4->name;
 return 0;
}
