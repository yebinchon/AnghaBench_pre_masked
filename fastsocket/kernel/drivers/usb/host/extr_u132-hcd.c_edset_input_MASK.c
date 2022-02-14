
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {int dummy; } ;
struct u132_ring {int number; } ;
struct u132_endp {int usb_endp; } ;
struct u132 {int platform_dev; } ;


 int FUNC_0 (int ,int ,struct u132_endp*,struct urb*,int ,int ,int ,void (*) (void*,struct urb*,int *,int,int,int,int,int,int,int,int,int)) ;

__attribute__((used)) static inline int FUNC_1(struct u132 *VAR_0, struct u132_ring *VAR_1,
 struct u132_endp *VAR_2, struct urb *VAR_3, u8 VAR_4, u8 VAR_5,
 void (*VAR_6) (void *VAR_7, struct urb *VAR_8, u8 *VAR_9, int VAR_10,
 int VAR_11, int VAR_12, int VAR_13, int VAR_14,
  int VAR_15, int VAR_16, int VAR_17, int VAR_18))
{
 return FUNC_0(VAR_0->platform_dev, VAR_1->number, VAR_2,
   VAR_3, VAR_4, VAR_2->usb_endp, VAR_5, VAR_6);
}
