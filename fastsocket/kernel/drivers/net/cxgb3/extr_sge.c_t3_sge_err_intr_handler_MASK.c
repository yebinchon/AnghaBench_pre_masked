
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int db_empty_task; int db_full_task; int db_drop_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,char*,...) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct adapter*) ;
 unsigned int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,unsigned int) ;

void FUNC_5(struct adapter *VAR_16)
{
 unsigned int VAR_17, VAR_18 = FUNC_3(VAR_16, VAR_0) &
     ~VAR_2;

 if (VAR_18 & VAR_13)
  FUNC_0(VAR_16, "SGE parity error (0x%x)\n",
    VAR_18 & VAR_13);
 if (VAR_18 & VAR_12)
  FUNC_0(VAR_16, "SGE framing error (0x%x)\n",
    VAR_18 & VAR_12);

 if (VAR_18 & VAR_9)
  FUNC_0(VAR_16, "SGE response queue credit overflow\n");

 if (VAR_18 & VAR_10) {
  VAR_17 = FUNC_3(VAR_16, VAR_1);

  FUNC_0(VAR_16,
    "packet delivered to disabled response queue "
    "(0x%x)\n", (VAR_17 >> VAR_14) & 0xff);
 }

 if (VAR_18 & (VAR_3 | VAR_6))
  FUNC_1(VAR_15, &VAR_16->db_drop_task);

 if (VAR_18 & (VAR_5 | VAR_8))
  FUNC_1(VAR_15, &VAR_16->db_full_task);

 if (VAR_18 & (VAR_4 | VAR_7))
  FUNC_1(VAR_15, &VAR_16->db_empty_task);

 FUNC_4(VAR_16, VAR_0, VAR_18);
 if (VAR_18 & VAR_11)
  FUNC_2(VAR_16);
}
