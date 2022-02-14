
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom {int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,void const*,int) ;
 int FUNC_3 (int ,int,unsigned char,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct wacom *VAR_5, int VAR_6, const void *VAR_7)
{
 unsigned char *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_1(259, VAR_1);
 if (!VAR_8)
  return -VAR_0;


 VAR_8[0] = VAR_2;
 VAR_8[1] = 1;
 VAR_10 = FUNC_3(VAR_5->intf, 0x03, VAR_2,
      VAR_8, 2, VAR_4);
 if (VAR_10 < 0)
  goto out;

 VAR_8[0] = VAR_3;
 VAR_8[1] = VAR_6 & 0x07;
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  VAR_8[2] = VAR_9;
  FUNC_2(VAR_8 + 3, VAR_7 + VAR_9 * 256, 256);

  VAR_10 = FUNC_3(VAR_5->intf, 0x03, VAR_3,
       VAR_8, 259, VAR_4);
  if (VAR_10 < 0)
   break;
 }


 VAR_8[0] = VAR_2;
 VAR_8[1] = 0;
 FUNC_3(VAR_5->intf, 0x03, VAR_2,
    VAR_8, 2, VAR_4);

out:
 FUNC_0(VAR_8);
 return VAR_10;
}
