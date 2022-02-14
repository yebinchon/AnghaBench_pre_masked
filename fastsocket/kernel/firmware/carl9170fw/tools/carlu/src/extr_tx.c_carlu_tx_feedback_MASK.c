
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct frame {int dummy; } ;
struct carlu_tx_info {TYPE_2__* rates; } ;
struct carlu {int dummy; } ;
struct TYPE_4__ {unsigned int ext; } ;
struct carl9170_rsp {TYPE_3__* _tx_status; TYPE_1__ hdr; } ;
struct TYPE_6__ {unsigned int info; int cookie; } ;
struct TYPE_5__ {int cnt; int rix; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct frame* FUNC_0 (struct carlu*,unsigned int,int ) ;
 int FUNC_1 (struct carlu*,struct frame*) ;
 int FUNC_2 (struct carlu*,struct frame*) ;
 int FUNC_3 (char*,int ) ;
 struct carlu_tx_info* FUNC_4 (struct frame*) ;

void FUNC_5(struct carlu *VAR_7,
         struct carl9170_rsp *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 struct frame *VAR_13;
 struct carlu_tx_info *VAR_14;

 VAR_10 = VAR_8->hdr.ext;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_12 = (VAR_8->_tx_status[VAR_9].info >> VAR_2) &
      VAR_1;
  VAR_13 = FUNC_0(VAR_7, VAR_12, VAR_8->_tx_status[VAR_9].cookie);
  if (VAR_13) {
   FUNC_1(VAR_7, VAR_13);
   VAR_14 = FUNC_4(VAR_13);

   VAR_11 = (VAR_8->_tx_status[VAR_9].info >> VAR_3)
       & VAR_4;
   VAR_14->rates[VAR_11].cnt = (VAR_8->_tx_status[VAR_9].info >>
       VAR_6) &
      VAR_5;
   for (VAR_11++; VAR_11 < VAR_0; VAR_11++) {
    VAR_14->rates[VAR_11].rix = -1;
    VAR_14->rates[VAR_11].cnt = -1;
   }

   FUNC_2(VAR_7, VAR_13);
  } else {
   FUNC_3("Found no frame for cookie %d.\n",
       VAR_8->_tx_status[VAR_9].cookie);
  }
 }
}
