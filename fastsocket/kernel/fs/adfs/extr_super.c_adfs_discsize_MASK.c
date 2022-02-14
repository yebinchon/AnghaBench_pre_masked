
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adfs_discrecord {int disc_size; int disc_size_high; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct adfs_discrecord *VAR_0, int VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_0->disc_size_high) << (32 - VAR_1);
 VAR_2 |= FUNC_0(VAR_0->disc_size) >> VAR_1;

 return VAR_2;
}
