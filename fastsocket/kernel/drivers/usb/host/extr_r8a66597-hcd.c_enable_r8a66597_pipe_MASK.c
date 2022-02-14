
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct r8a66597_pipe* hcpriv; } ;
struct urb {int dummy; } ;
struct r8a66597_pipe_info {size_t pipenum; } ;
struct r8a66597_pipe {struct r8a66597_pipe_info info; } ;
struct r8a66597_device {int * pipe_cnt; } ;
struct r8a66597 {int * pipe_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct r8a66597*,struct r8a66597_device*,struct r8a66597_pipe*,struct urb*) ;
 struct r8a66597_device* FUNC_2 (struct r8a66597*,struct urb*) ;
 int FUNC_3 (struct r8a66597_pipe*,int ) ;

__attribute__((used)) static void FUNC_4(struct r8a66597 *VAR_1, struct urb *VAR_2,
     struct usb_host_endpoint *VAR_3,
     struct r8a66597_pipe_info *VAR_4)
{
 struct r8a66597_device *VAR_5 = FUNC_2(VAR_1, VAR_2);
 struct r8a66597_pipe *VAR_6 = VAR_3->hcpriv;

 FUNC_0("enable_pipe:");

 VAR_6->info = *VAR_4;
 FUNC_3(VAR_6, VAR_0);
 VAR_1->pipe_cnt[VAR_6->info.pipenum]++;
 VAR_5->pipe_cnt[VAR_6->info.pipenum]++;

 FUNC_1(VAR_1, VAR_5, VAR_6, VAR_2);
}
