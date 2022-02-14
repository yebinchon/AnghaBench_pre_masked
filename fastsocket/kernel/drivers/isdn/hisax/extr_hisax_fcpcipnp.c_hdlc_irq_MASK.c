
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fritz_adapter {int (* read_hdlc_status ) (struct fritz_adapter*,int) ;int * bcs; } ;


 int FUNC_0 (int,char*,char,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct fritz_adapter*,int) ;

__attribute__((used)) static inline void FUNC_3(struct fritz_adapter *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  VAR_3 = VAR_1->read_hdlc_status(VAR_1, VAR_2);
  FUNC_0(0x10, "HDLC %c stat %#x", 'A' + VAR_2, VAR_3);
  if (VAR_3 & VAR_0)
   FUNC_1(&VAR_1->bcs[VAR_2], VAR_3);
 }
}
