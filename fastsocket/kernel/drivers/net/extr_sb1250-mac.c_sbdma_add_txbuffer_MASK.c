
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sk_buff {int len; int data; } ;
struct sbmacdma {int sbdma_dscrcnt; struct sbdmadscr* sbdma_addptr; struct sbdmadscr* sbdma_dscrtable; struct sk_buff** sbdma_ctxtable; struct sbdmadscr* sbdma_remptr; } ;
struct sbdmadscr {int dscr_a; int dscr_b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct sbdmadscr* FUNC_1 (struct sbmacdma*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sbmacdma *VAR_6, struct sk_buff *VAR_7)
{
 struct sbdmadscr *VAR_8;
 struct sbdmadscr *VAR_9;
 uint64_t VAR_10;
 uint64_t VAR_11;
 int VAR_12;



 VAR_8 = VAR_6->sbdma_addptr;
 VAR_9 = FUNC_1(VAR_6,VAR_5);







 if (VAR_9 == VAR_6->sbdma_remptr) {
  return -VAR_0;
 }







 VAR_12 = VAR_7->len;
 VAR_10 = FUNC_6(VAR_7->data);
 VAR_11 = FUNC_0(VAR_12+(VAR_10 & (VAR_4 - 1)));

 VAR_8->dscr_a = VAR_10 |
  FUNC_2(VAR_11) |

  VAR_2 |

  VAR_3;



 VAR_8->dscr_b = FUNC_3(VAR_1) |
  FUNC_4(VAR_12);





 VAR_6->sbdma_ctxtable[VAR_8-VAR_6->sbdma_dscrtable] = VAR_7;





 VAR_6->sbdma_addptr = VAR_9;





 FUNC_5(1, VAR_6->sbdma_dscrcnt);

 return 0;
}
