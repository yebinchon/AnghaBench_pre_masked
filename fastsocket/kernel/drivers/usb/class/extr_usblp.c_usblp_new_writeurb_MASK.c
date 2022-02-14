
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usblp {size_t current_protocol; TYPE_1__* protocol; int dev; } ;
struct urb {int transfer_flags; } ;
struct TYPE_4__ {int bEndpointAddress; } ;
struct TYPE_3__ {TYPE_2__* epwrite; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int ,int ,char*,int,int ,struct usblp*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct urb *FUNC_5(struct usblp *VAR_3, int VAR_4)
{
 struct urb *VAR_5;
 char *VAR_6;

 if ((VAR_6 = FUNC_1(VAR_4, VAR_0)) == ((void*)0))
  return ((void*)0);
 if ((VAR_5 = FUNC_2(0, VAR_0)) == ((void*)0)) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 FUNC_3(VAR_5, VAR_3->dev,
  FUNC_4(VAR_3->dev,
   VAR_3->protocol[VAR_3->current_protocol].epwrite->bEndpointAddress),
  VAR_6, VAR_4, VAR_2, VAR_3);
 VAR_5->transfer_flags |= VAR_1;

 return VAR_5;
}
