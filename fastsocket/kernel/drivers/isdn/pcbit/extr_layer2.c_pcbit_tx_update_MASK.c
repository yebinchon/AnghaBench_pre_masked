
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int u_char ;
struct pcbit_dev {int send_seq; int rcv_seq; scalar_t__ sh_mem; int * fsize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static __inline__ void
FUNC_1(struct pcbit_dev *VAR_1, ushort VAR_2)
{
 u_char VAR_3;

 VAR_1->send_seq = (VAR_1->send_seq + 1) % 8;

 VAR_1->fsize[VAR_1->send_seq] = VAR_2;
 VAR_3 = 0;
 VAR_3 |= VAR_1->rcv_seq << 3;
 VAR_3 |= VAR_1->send_seq;

 FUNC_0(VAR_3, VAR_1->sh_mem + VAR_0);

}
