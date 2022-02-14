
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ context; } ;
struct hdpvr_device {int wait_data; } ;
struct hdpvr_buffer {int status; struct hdpvr_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_1)
{
 struct hdpvr_buffer *VAR_2 = (struct hdpvr_buffer *)VAR_1->context;
 struct hdpvr_device *VAR_3 = VAR_2->dev;


 VAR_2->status = VAR_0;
 FUNC_0(&VAR_3->wait_data);
}
