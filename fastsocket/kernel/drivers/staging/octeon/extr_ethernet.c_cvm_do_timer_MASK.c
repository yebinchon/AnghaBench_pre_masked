
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct octeon_ethernet {scalar_t__ fau; int * tx_free_list; int (* poll ) (TYPE_2__*) ;} ;
typedef int int32_t ;
struct TYPE_7__ {TYPE_1__* netdev_ops; } ;
struct TYPE_6__ {int (* ndo_get_stats ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;
 int FUNC_0 (struct octeon_ethernet*,int ,int,int) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,scalar_t__) ;
 struct octeon_ethernet* FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_7)
{
 int32_t VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;
 struct octeon_ethernet *VAR_12;
 static int VAR_13;

 if (VAR_13 >= VAR_0) {




  VAR_13 = 0;
  FUNC_5(&VAR_4, VAR_5 + VAR_1);
  return;
 }
 if (!VAR_3[VAR_13])
  goto out;

 VAR_12 = FUNC_6(VAR_3[VAR_13]);
 if (VAR_12->poll) {

  if (!FUNC_4(&VAR_6)) {
   VAR_12->poll(VAR_3[VAR_13]);
   FUNC_10(&VAR_6);
  }
 }

 VAR_10 = FUNC_3(VAR_13);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  if (FUNC_7(&VAR_12->tx_free_list[VAR_11]) == 0)
   continue;
  VAR_8 = FUNC_2(VAR_12->fau + VAR_11 * 4,
             VAR_2);
  VAR_9 = VAR_8 > 0 ?
   VAR_2 : VAR_8 + VAR_2;
  if (VAR_9 > 0)
   FUNC_1(VAR_12->fau+VAR_11*4, -VAR_9);
  VAR_8 = -VAR_8 > VAR_2 ?
   VAR_2 : -VAR_8;
  FUNC_0(VAR_12, VAR_8, VAR_11, 1);
 }
 VAR_3[VAR_13]->netdev_ops->ndo_get_stats(VAR_3[VAR_13]);

out:
 VAR_13++;


 FUNC_5(&VAR_4, VAR_5 + VAR_1 / 50);
}
