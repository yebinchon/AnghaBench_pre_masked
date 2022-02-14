
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_request {int dummy; } ;
struct fw_card {int * topology_map; } ;
typedef int __be32 ;
struct TYPE_2__ {unsigned long long start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fw_card*,struct fw_request*,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct fw_card *VAR_4, struct fw_request *VAR_5,
  int VAR_6, int VAR_7, int VAR_8, int VAR_9,
  int VAR_10, unsigned long long VAR_11,
  void *VAR_12, size_t VAR_13, void *VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 __be32 *VAR_18;

 if (!FUNC_0(VAR_6)) {
  FUNC_2(VAR_4, VAR_5, VAR_2);
  return;
 }

 if ((VAR_11 & 3) > 0 || (VAR_13 & 3) > 0) {
  FUNC_2(VAR_4, VAR_5, VAR_0);
  return;
 }

 VAR_16 = (VAR_11 - VAR_3.start) / 4;
 VAR_17 = VAR_16 + VAR_13 / 4;
 VAR_18 = VAR_12;

 for (VAR_15 = 0; VAR_15 < VAR_13 / 4; VAR_15++)
  VAR_18[VAR_15] = FUNC_1(VAR_4->topology_map[VAR_16 + VAR_15]);

 FUNC_2(VAR_4, VAR_5, VAR_1);
}
