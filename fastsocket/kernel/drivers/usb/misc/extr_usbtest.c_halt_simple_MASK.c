
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {scalar_t__ out_pipe; scalar_t__ in_pipe; } ;
struct urb {scalar_t__ pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct urb* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct usbtest_dev*,int,struct urb*) ;
 int FUNC_3 (struct usbtest_dev*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5 (struct usbtest_dev *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 struct urb *VAR_5;

 VAR_5 = FUNC_0 (FUNC_3 (VAR_2), 0, 512);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 if (VAR_2->in_pipe) {
  VAR_3 = FUNC_4 (VAR_2->in_pipe) | VAR_1;
  VAR_5->pipe = VAR_2->in_pipe;
  VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_5);
  if (VAR_4 < 0)
   goto done;
 }

 if (VAR_2->out_pipe) {
  VAR_3 = FUNC_4 (VAR_2->out_pipe);
  VAR_5->pipe = VAR_2->out_pipe;
  VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_5);
 }
done:
 FUNC_1 (VAR_5);
 return VAR_4;
}
