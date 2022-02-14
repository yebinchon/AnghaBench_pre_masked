
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapped_io {int num_resources; int list; int magic; scalar_t__ virt_base; struct resource* resource; } ;
struct resource {unsigned long flags; scalar_t__ start; scalar_t__ end; } ;
struct page {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,unsigned long,char*,unsigned long) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int ) ;
 struct page* FUNC_9 (struct trapped_io*) ;
 scalar_t__ FUNC_10 (struct page**,int,int ,int ) ;

int FUNC_11(struct trapped_io *VAR_12)
{
 struct resource *VAR_13;
 unsigned long VAR_14 = 0, VAR_15 = 0;
 struct page *VAR_16[VAR_6];
 int VAR_17, VAR_18;

 if (FUNC_8(VAR_9))
  return 0;


 if ((unsigned long)VAR_12 & (VAR_5 - 1))
  goto bad;

 for (VAR_17 = 0; VAR_17 < VAR_12->num_resources; VAR_17++) {
  VAR_13 = VAR_12->resource + VAR_17;
  VAR_14 += FUNC_5((VAR_13->end - VAR_13->start) + 1, VAR_5);
  VAR_15 |= VAR_13->flags;
 }


 if (FUNC_1(VAR_15) != 1)
  goto bad;

 VAR_18 = VAR_14 >> VAR_4;

 if (VAR_18 >= VAR_6)
  goto bad;

 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
  VAR_16[VAR_17] = FUNC_9(VAR_12);

 VAR_12->virt_base = FUNC_10(VAR_16, VAR_18, VAR_7, VAR_3);
 if (!VAR_12->virt_base)
  goto bad;

 VAR_14 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_12->num_resources; VAR_17++) {
  VAR_13 = VAR_12->resource + VAR_17;
  FUNC_3("trapped io 0x%08lx overrides %s 0x%08lx\n",
         (unsigned long)(VAR_12->virt_base + VAR_14),
         VAR_13->flags & VAR_0 ? "io" : "mmio",
         (unsigned long)VAR_13->start);
  VAR_14 += FUNC_5((VAR_13->end - VAR_13->start) + 1, VAR_5);
 }

 VAR_12->magic = VAR_2;
 FUNC_0(&VAR_12->list);
 FUNC_6(&VAR_10);
 if (VAR_15 & VAR_0)
  FUNC_2(&VAR_12->list, &VAR_8);
 if (VAR_15 & VAR_1)
  FUNC_2(&VAR_12->list, &VAR_11);
 FUNC_7(&VAR_10);

 return 0;
 bad:
 FUNC_4("unable to install trapped io filter\n");
 return -1;
}
