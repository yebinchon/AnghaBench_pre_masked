
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct ieee802_1x_hdr {int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(u8 *VAR_2, u8 *VAR_3, u32 VAR_4, uint8_t *VAR_5)
{
    struct ieee802_1x_hdr *VAR_6;
    int VAR_7 = VAR_0;

    VAR_6 = (struct ieee802_1x_hdr *) VAR_3;

    switch (VAR_6->type) {
     case 129:
     case 128:
     case 130:
      VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
      break;
     case 131:
            VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
      break;
     default:
  FUNC_1(VAR_1, "Unknown EAPOL packet type - %d\n", VAR_6->type);
      break;
    }

 return VAR_7;
}
