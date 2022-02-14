
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct msghdr {int msg_iovlen; scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {int iov_len; void* iov_base; } ;
typedef int UINT ;
struct TYPE_4__ {int Socket; int Pcap; int * Tap; scalar_t__ IsRawIpMode; } ;
typedef TYPE_1__ ETH ;


 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (TYPE_1__*,void*,int) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,void*,int) ;
 int VAR_2 ;
 int FUNC_4 (int ,void*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int,struct msghdr*,int ) ;
 int FUNC_7 (int,void*,int) ;

void FUNC_8(ETH *VAR_3, void *VAR_4, UINT VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }
 if (VAR_3->IsRawIpMode)
 {
  FUNC_1(VAR_3, VAR_4, VAR_5);
  return;
 }
 if (VAR_5 < 14 || VAR_5 > VAR_1)
 {
  FUNC_2(VAR_4);
  return;
 }

 if (VAR_3->Tap != ((void*)0))
 {


  FUNC_3(VAR_3->Tap, VAR_4, VAR_5);

  return;
 }

 VAR_6 = VAR_3->Socket;

 if (VAR_6 == VAR_0)
 {
  FUNC_2(VAR_4);
  return;
 }
 VAR_7 = FUNC_7(VAR_6, VAR_4, VAR_5);
 if (VAR_7<0)
 {
  FUNC_0("EthPutPacket: ret:%d errno:%d  size:%d\n", VAR_7, VAR_2, VAR_5);
 }
 FUNC_2(VAR_4);
}
