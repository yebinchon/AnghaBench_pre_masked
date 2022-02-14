
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sh_flctl {int erase_ADRCNT; int rw_ADRCNT; scalar_t__ page_size; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (struct sh_flctl*) ;
 int FUNC_2 (struct sh_flctl*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct sh_flctl* FUNC_3 (struct mtd_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 struct sh_flctl *VAR_11 = FUNC_3(VAR_8);
 uint32_t VAR_12 = FUNC_4(FUNC_2(VAR_11));
 uint32_t VAR_13, VAR_14 = 0;


 if (VAR_11->page_size)
  VAR_12 |= VAR_7;
 else
  VAR_12 &= ~VAR_7;


 VAR_13 = VAR_3 | VAR_2;


 switch (VAR_9) {
 case 135:
  VAR_14 = VAR_11->erase_ADRCNT;
  VAR_13 |= VAR_4;
  break;
 case 133:
 case 131:
  VAR_14 = VAR_11->rw_ADRCNT;
  VAR_13 |= VAR_1;
  break;
 case 129:

  VAR_13 &= ~VAR_2;
  break;
 case 134:
  VAR_14 = VAR_11->rw_ADRCNT;
  VAR_13 |= VAR_4 | VAR_1 | VAR_6;
  break;
 case 132:
  VAR_12 &= ~VAR_7;
  VAR_14 = VAR_0;
  break;
 case 128:
 case 130:
  VAR_12 &= ~VAR_7;
  VAR_13 &= ~(VAR_2 | VAR_5);
  break;
 default:
  break;
 }


 VAR_13 |= VAR_14;


 FUNC_5(VAR_12, FUNC_2(VAR_11));
 FUNC_5(VAR_13, FUNC_1(VAR_11));
 FUNC_5(VAR_10, FUNC_0(VAR_11));
}
