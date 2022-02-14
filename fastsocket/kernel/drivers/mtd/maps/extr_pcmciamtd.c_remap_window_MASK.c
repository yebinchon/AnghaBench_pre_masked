
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int window_handle_t ;
struct pcmciamtd_dev {int win_size; unsigned long offset; int * win_base; int p_dev; } ;
struct map_info {int map_priv_2; scalar_t__ map_priv_1; } ;
struct TYPE_3__ {unsigned long CardOffset; scalar_t__ Page; } ;
typedef TYPE_1__ memreq_t ;
typedef int * caddr_t ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static caddr_t FUNC_4(struct map_info *VAR_1, unsigned long VAR_2)
{
 struct pcmciamtd_dev *VAR_3 = (struct pcmciamtd_dev *)VAR_1->map_priv_1;
 window_handle_t VAR_4 = (window_handle_t)VAR_1->map_priv_2;
 memreq_t VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_3->p_dev)) {
  FUNC_0(1, "device removed");
  return 0;
 }

 VAR_5.CardOffset = VAR_2 & ~(VAR_3->win_size-1);
 if(VAR_5.CardOffset != VAR_3->offset) {
  FUNC_0(2, "Remapping window from 0x%8.8x to 0x%8.8x",
        VAR_3->offset, VAR_5.CardOffset);
  VAR_5.Page = 0;
  VAR_6 = FUNC_3(VAR_4, &VAR_5);
  if (VAR_6 != 0) {
   FUNC_1(VAR_3->p_dev, VAR_0, VAR_6);
   return ((void*)0);
  }
  VAR_3->offset = VAR_5.CardOffset;
 }
 return VAR_3->win_base + (VAR_2 & (VAR_3->win_size-1));
}
