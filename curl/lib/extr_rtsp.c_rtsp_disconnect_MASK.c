
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rtp_buf; } ;
struct TYPE_4__ {TYPE_1__ rtspc; } ;
struct connectdata {TYPE_2__ proto; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_1, bool VAR_2)
{
  (void) VAR_2;
  FUNC_0(VAR_1->proto.rtspc.rtp_buf);
  return VAR_0;
}
