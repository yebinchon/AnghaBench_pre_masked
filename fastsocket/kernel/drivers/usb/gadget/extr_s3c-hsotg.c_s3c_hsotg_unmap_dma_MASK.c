
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ length; int dma; } ;
struct s3c_hsotg_req {scalar_t__ mapped; struct usb_request req; } ;
struct s3c_hsotg_ep {scalar_t__ dir_in; } ;
struct s3c_hsotg {int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__,int) ;
 int FUNC_1 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct s3c_hsotg *VAR_3,
    struct s3c_hsotg_ep *VAR_4,
    struct s3c_hsotg_req *VAR_5)
{
 struct usb_request *VAR_6 = &VAR_5->req;
 enum dma_data_direction VAR_7;

 VAR_7 = VAR_4->dir_in ? VAR_2 : VAR_1;


 if (VAR_5->req.length == 0)
  return;

 if (VAR_5->mapped) {


  FUNC_1(VAR_3->dev, VAR_6->dma, VAR_6->length, VAR_7);

  VAR_6->dma = VAR_0;
  VAR_5->mapped = 0;
 } else {
  FUNC_0(VAR_3->dev, VAR_6->dma, VAR_6->length, VAR_7);
 }
}
