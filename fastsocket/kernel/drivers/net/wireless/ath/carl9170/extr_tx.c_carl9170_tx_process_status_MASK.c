
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ext; int len; } ;
struct carl9170_rsp {TYPE_1__* _tx_status; TYPE_2__ hdr; } ;
struct ar9170 {int dummy; } ;
struct TYPE_3__ {int info; int cookie; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ar9170*,int ,int ) ;
 int FUNC_2 (char*,int ,void*,int) ;

void FUNC_3(struct ar9170 *VAR_1,
    const struct carl9170_rsp *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->hdr.ext; VAR_3++) {
  if (FUNC_0(VAR_3 > ((VAR_2->hdr.len / 2) + 1))) {
   FUNC_2("UU:", VAR_0,
          (void *) VAR_2, VAR_2->hdr.len + 4);
   break;
  }

  FUNC_1(VAR_1, VAR_2->_tx_status[VAR_3].cookie,
          VAR_2->_tx_status[VAR_3].info);
 }
}
