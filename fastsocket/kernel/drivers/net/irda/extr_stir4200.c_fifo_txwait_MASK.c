
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stir_cb {unsigned long* fifo_status; unsigned long speed; TYPE_1__* netdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,unsigned long,unsigned long) ;
 int FUNC_5 (struct stir_cb*,int ,unsigned long*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct stir_cb*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct stir_cb *VAR_9, int VAR_10)
{
 int VAR_11;
 unsigned long VAR_12, VAR_13;
 unsigned long VAR_14 = 0x1fff;


 for (;; VAR_14 = VAR_12) {
  VAR_11 = FUNC_5(VAR_9, VAR_6, VAR_9->fifo_status,
       VAR_5);
  if (FUNC_7(VAR_11 != VAR_5)) {
   FUNC_0(&VAR_9->netdev->dev,
     "FIFO register read error: %d\n", VAR_11);

   return VAR_11;
  }

  VAR_13 = VAR_9->fifo_status[0];
  VAR_12 = (unsigned)(VAR_9->fifo_status[2] & 0x1f) << 8
   | VAR_9->fifo_status[1];

  FUNC_4("fifo status 0x%lx count %lu\n", VAR_13, VAR_12);


  if (!(VAR_13 & VAR_3)
      || (VAR_13 & VAR_4))
   return 0;

  if (FUNC_6(VAR_8))
   return -VAR_0;


  if (!FUNC_3(VAR_9->netdev)
      || !FUNC_2(VAR_9->netdev))
   return -VAR_1;


  if (VAR_10 >= 0 && VAR_7 - 4 > VAR_10 + VAR_12)
   return 0;


  if (VAR_14 < VAR_12)
   break;


  FUNC_1((VAR_12 * 8000) / VAR_9->speed);
 }

 VAR_11 = FUNC_8(VAR_9, VAR_6, VAR_2);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_8(VAR_9, VAR_6, 0);
 if (VAR_11)
  return VAR_11;

 return 0;
}
