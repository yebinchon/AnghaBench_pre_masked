
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct capi_ctr {scalar_t__ driverdata; } ;
struct TYPE_3__ {int ncci_head; TYPE_2__* card; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_4__ {unsigned int port; int lock; } ;
typedef TYPE_2__ avmcard ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (unsigned int,int ) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (unsigned int,scalar_t__,scalar_t__) ;

__attribute__((used)) static u16 FUNC_14(struct capi_ctr *VAR_4, struct sk_buff *VAR_5)
{
 avmctrl_info *VAR_6 = (avmctrl_info *)(VAR_4->driverdata);
 avmcard *VAR_7 = VAR_6->card;
 unsigned int VAR_8 = VAR_7->port;
 unsigned long VAR_9;
 u16 VAR_10 = FUNC_4(VAR_5->data);
 u8 VAR_11 = FUNC_2(VAR_5->data);
 u8 VAR_12 = FUNC_7(VAR_5->data);
 u16 VAR_13, VAR_14;

 FUNC_11(&VAR_7->lock, VAR_9);
 if (FUNC_0(VAR_11, VAR_12) == VAR_0) {
  VAR_14 = FUNC_9(&VAR_6->ncci_head,
          FUNC_1(VAR_5->data),
          FUNC_6(VAR_5->data),
          FUNC_5(VAR_5->data));
  if (VAR_14 != VAR_1) {
   FUNC_12(&VAR_7->lock, VAR_9);
   return VAR_14;
  }
  VAR_13 = FUNC_3(VAR_5->data);

  FUNC_8(VAR_8, VAR_2);
  FUNC_13(VAR_8, VAR_5->data, VAR_10);
  FUNC_13(VAR_8, VAR_5->data + VAR_10, VAR_13);
 } else {
  FUNC_8(VAR_8, VAR_3);
  FUNC_13(VAR_8, VAR_5->data, VAR_10);
 }
 FUNC_12(&VAR_7->lock, VAR_9);
 FUNC_10(VAR_5);
 return VAR_1;
}
