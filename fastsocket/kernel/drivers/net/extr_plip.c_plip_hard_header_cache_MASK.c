
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct neighbour {int dev; } ;
struct hh_cache {scalar_t__ hh_data; } ;
struct ethhdr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct neighbour const*,struct hh_cache*) ;
 int FUNC_2 (int ,struct ethhdr*) ;

__attribute__((used)) static int FUNC_3(const struct neighbour *VAR_0,
      struct hh_cache *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == 0) {
  struct ethhdr *VAR_3;

  VAR_3 = (struct ethhdr*)(((u8*)VAR_1->hh_data) +
           FUNC_0(sizeof(*VAR_3)));
  FUNC_2 (VAR_0->dev, VAR_3);
 }

 return VAR_2;
}
