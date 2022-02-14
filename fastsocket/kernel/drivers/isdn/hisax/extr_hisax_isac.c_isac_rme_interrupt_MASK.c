
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct isac {unsigned char (* read_isac ) (struct isac*,int ) ;int rcvidx; int rcvbuf; int (* write_isac ) (struct isac*,int ,int ) ;} ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_2 (struct isac*,int,struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (struct isac*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 unsigned char FUNC_7 (struct isac*,int ) ;
 int FUNC_8 (struct isac*,int ,int ) ;
 int FUNC_9 (struct isac*,int ) ;

__attribute__((used)) static inline void FUNC_10(struct isac *VAR_13)
{
 unsigned char VAR_14;
 int VAR_15;
 struct sk_buff *VAR_16;

 VAR_14 = VAR_13->read_isac(VAR_13, VAR_8);
 if ((VAR_14 & (VAR_11 | VAR_9 | VAR_10) )
      != VAR_9) {
  FUNC_0(VAR_2, "RSTA %#x, dropped", VAR_14);
  VAR_13->write_isac(VAR_13, VAR_5, VAR_6);
  goto out;
 }

 VAR_15 = VAR_13->read_isac(VAR_13, VAR_7) & 0x1f;
 FUNC_0(VAR_0, "RBCL %#x", VAR_15);
 if (VAR_15 == 0)
  VAR_15 = 0x20;

 FUNC_4(VAR_13, VAR_15);
 VAR_15 = VAR_13->rcvidx;
 if (VAR_15 < 1) {
  FUNC_0(VAR_2, "count %d < 1", VAR_15);
  goto out;
 }

 VAR_16 = FUNC_3(VAR_15, VAR_3);
 if (!VAR_16) {
  FUNC_0(VAR_2, "no memory, dropping\n");
  goto out;
 }
 FUNC_5(FUNC_6(VAR_16, VAR_15), VAR_13->rcvbuf, VAR_15);
 FUNC_1(VAR_1, VAR_16);
 FUNC_2(VAR_13, VAR_12 | VAR_4, VAR_16);
 out:
 VAR_13->rcvidx = 0;
}
