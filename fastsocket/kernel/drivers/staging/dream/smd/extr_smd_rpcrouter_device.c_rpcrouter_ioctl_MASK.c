
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rpcrouter_ioctl_server_args {int vers; int prog; } ;
struct msm_rpc_endpoint {int dummy; } ;
struct file {scalar_t__ private_data; } ;
typedef int server_args ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_1 (struct rpcrouter_ioctl_server_args*,void*,int) ;
 int FUNC_2 (struct msm_rpc_endpoint*) ;
 int FUNC_3 (struct msm_rpc_endpoint*,int ,int ) ;
 int FUNC_4 (struct msm_rpc_endpoint*,int ,int ) ;
 int FUNC_5 (int ,unsigned int*) ;

__attribute__((used)) static long FUNC_6(struct file *VAR_3, unsigned int VAR_4,
       unsigned long VAR_5)
{
 struct msm_rpc_endpoint *VAR_6;
 struct rpcrouter_ioctl_server_args VAR_7;
 int VAR_8 = 0;
 uint32_t VAR_9;

 VAR_6 = (struct msm_rpc_endpoint *) VAR_3->private_data;
 switch (VAR_4) {

 case 130:
  VAR_9 = VAR_2;
  VAR_8 = FUNC_5(VAR_9, (unsigned int *) VAR_5);
  break;

 case 131:



  VAR_9 = VAR_1 - sizeof(uint32_t);
  VAR_8 = FUNC_5(VAR_9, (unsigned int *) VAR_5);
  break;

 case 129:
  VAR_8 = FUNC_1(&VAR_7, (void *) VAR_5,
        sizeof(VAR_7));
  if (VAR_8 < 0)
   break;
  FUNC_3(VAR_6,
     VAR_7.prog,
     VAR_7.vers);
  break;

 case 128:
  VAR_8 = FUNC_1(&VAR_7, (void *) VAR_5,
        sizeof(VAR_7));
  if (VAR_8 < 0)
   break;

  FUNC_4(VAR_6,
       VAR_7.prog,
       VAR_7.vers);
  break;

 case 132:
  VAR_9 = FUNC_0(FUNC_2(VAR_6));
  VAR_8 = FUNC_5(VAR_9, (unsigned int *)VAR_5);
  break;

 default:
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
