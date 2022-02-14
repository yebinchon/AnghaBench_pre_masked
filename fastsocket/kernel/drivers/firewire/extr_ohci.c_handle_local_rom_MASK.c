
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_packet {int * header; } ;
struct fw_ohci {int card; scalar_t__ config_rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,struct fw_packet*) ;
 int FUNC_5 (struct fw_packet*,int *,int ,void*,int) ;

__attribute__((used)) static void FUNC_6(struct fw_ohci *VAR_5,
        struct fw_packet *VAR_6, u32 VAR_7)
{
 struct fw_packet VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_1(VAR_6->header[0]);
 if (FUNC_2(VAR_9))
  VAR_10 = FUNC_0(VAR_6->header[3]);
 else
  VAR_10 = 4;

 VAR_11 = VAR_7 - VAR_1;
 if (VAR_11 + VAR_10 > VAR_0) {
  FUNC_5(&VAR_8, VAR_6->header,
     VAR_2, ((void*)0), 0);
 } else if (!FUNC_3(VAR_9)) {
  FUNC_5(&VAR_8, VAR_6->header,
     VAR_4, ((void*)0), 0);
 } else {
  FUNC_5(&VAR_8, VAR_6->header, VAR_3,
     (void *) VAR_5->config_rom + VAR_11, VAR_10);
 }

 FUNC_4(&VAR_5->card, &VAR_8);
}
