
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct r8a66597_pipe_info {scalar_t__ pipenum; int type; int epnum; int buf_bsize; int bufnum; int maxpacket; int interval; int address; scalar_t__ dir_in; } ;
struct r8a66597 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct r8a66597*,int ,int ) ;
 int FUNC_3 (struct r8a66597*,int ,int ) ;
 int FUNC_4 (struct r8a66597*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct r8a66597 *VAR_10,
    struct r8a66597_pipe_info *VAR_11)
{
 u16 VAR_12 = 0;

 if (VAR_11->pipenum == 0)
  return;

 FUNC_3(VAR_10, VAR_0, FUNC_0(VAR_11->pipenum));
 FUNC_2(VAR_10, VAR_0, FUNC_0(VAR_11->pipenum));
 FUNC_4(VAR_10, VAR_11->pipenum, VAR_5);
 if (!VAR_11->dir_in)
  VAR_12 |= VAR_8;
 if (VAR_11->type == VAR_6 && VAR_11->dir_in)
  VAR_12 |= VAR_7 | VAR_9;
 VAR_12 |= VAR_11->type | VAR_11->epnum;
 FUNC_4(VAR_10, VAR_12, VAR_2);

 FUNC_4(VAR_10, (VAR_11->buf_bsize << 10) | (VAR_11->bufnum),
         VAR_1);
 FUNC_4(VAR_10, FUNC_1(VAR_11->address) | VAR_11->maxpacket,
         VAR_3);
 FUNC_4(VAR_10, VAR_11->interval, VAR_4);
}
