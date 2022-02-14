
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; } ;
struct ar9170 {int rx_anch; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ) ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct urb*,int *) ;
 int FUNC_3 (struct urb*,int ,int ,void*,int ,int ,struct ar9170*,int) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static int FUNC_8(struct ar9170 *VAR_6)
{
 struct urb *VAR_7 = ((void*)0);
 void *VAR_8;
 int VAR_9 = -VAR_2;

 VAR_7 = FUNC_1(0, VAR_3);
 if (!VAR_7)
  goto out;

 VAR_8 = FUNC_0(VAR_0, VAR_3);
 if (!VAR_8)
  goto out;

 FUNC_3(VAR_7, VAR_6->udev, FUNC_5(VAR_6->udev,
    VAR_1), VAR_8, VAR_0,
    VAR_5, VAR_6, 1);

 VAR_7->transfer_flags |= VAR_4;

 FUNC_2(VAR_7, &VAR_6->rx_anch);
 VAR_9 = FUNC_6(VAR_7, VAR_3);
 if (VAR_9)
  FUNC_7(VAR_7);

out:
 FUNC_4(VAR_7);
 return VAR_9;
}
