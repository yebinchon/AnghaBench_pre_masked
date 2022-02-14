
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_3__ {unsigned int start; scalar_t__ size; } ;
struct TYPE_4__ {TYPE_1__ ocq; } ;
struct adapter {TYPE_2__ vres; int pdev; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;
 unsigned int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct adapter*,int ) ;
 int FUNC_8 (struct adapter*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_5(VAR_8->pdev, 0);
 FUNC_8(VAR_8, FUNC_2(VAR_6, 0),
       (VAR_9 + VAR_1) | FUNC_0(0) |
       FUNC_3(FUNC_4(VAR_0) - 10));
 FUNC_8(VAR_8, FUNC_2(VAR_6, 1),
       (VAR_9 + VAR_3) | FUNC_0(0) |
       FUNC_3(FUNC_4(VAR_2) - 10));
 FUNC_8(VAR_8, FUNC_2(VAR_6, 2),
       (VAR_9 + VAR_5) | FUNC_0(0) |
       FUNC_3(FUNC_4(VAR_4) - 10));
 if (VAR_8->vres.ocq.size) {
  unsigned int VAR_10, VAR_11;

  VAR_10 = FUNC_5(VAR_8->pdev, 2) +
   FUNC_1(VAR_8->pdev, &VAR_8->vres);
  VAR_11 = FUNC_6(VAR_8->vres.ocq.size) >> 10;
  FUNC_8(VAR_8,
        FUNC_2(VAR_6, 3),
        VAR_10 | FUNC_0(1) | FUNC_3(FUNC_4(VAR_11)));
  FUNC_8(VAR_8,
        FUNC_2(VAR_7, 3),
        VAR_8->vres.ocq.start);
  FUNC_7(VAR_8,
       FUNC_2(VAR_7, 3));
 }
}
