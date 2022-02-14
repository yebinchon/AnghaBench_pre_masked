
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct b44 {int flags; TYPE_1__* dev; } ;
struct TYPE_2__ {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*,int ) ;
 int FUNC_3 (struct b44*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b44 *VAR_10)
{
 u32 VAR_11;

 FUNC_3(VAR_10, VAR_4, VAR_8);

 if (VAR_10->flags & VAR_3) {

  FUNC_3(VAR_10, VAR_5, VAR_9);

  VAR_11 = VAR_10->dev->dev_addr[2] << 24 |
   VAR_10->dev->dev_addr[3] << 16 |
   VAR_10->dev->dev_addr[4] << 8 |
   VAR_10->dev->dev_addr[5];
  FUNC_3(VAR_10, VAR_1, VAR_11);

  VAR_11 = VAR_10->dev->dev_addr[0] << 8 |
   VAR_10->dev->dev_addr[1];
  FUNC_3(VAR_10, VAR_0, VAR_11);

  VAR_11 = FUNC_2(VAR_10, VAR_2);
  FUNC_3(VAR_10, VAR_2, VAR_11 | VAR_6 | VAR_7);

  } else {
   FUNC_0(VAR_10);
  }
 FUNC_1(VAR_10);
}
