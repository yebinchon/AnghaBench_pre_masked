
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct block_device {int dummy; } ;
struct bio {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct block_device*) ;
 struct bio* FUNC_1 (struct block_device*,int ,int,int ) ;

__attribute__((used)) static struct bio *FUNC_2(struct block_device *VAR_0,
           u64 VAR_1, gfp_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);
}
