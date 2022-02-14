
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int OPENVPN_PACKET ;


 void* FUNC_0 (void*,scalar_t__) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (void*,scalar_t__) ;
 int FUNC_3 (void*,scalar_t__,char*,int ) ;
 int FUNC_4 (void*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (void*,scalar_t__) ;
 int FUNC_7 (char*) ;

UINT FUNC_8(void *VAR_6, UINT VAR_7, char *VAR_8)
{
 UINT VAR_9;
 void *VAR_10;
 OPENVPN_PACKET *VAR_11;

 if (VAR_6 == ((void*)0) || VAR_7 == 0)
 {
  return VAR_0;
 }

 VAR_9 = VAR_0;
 VAR_10 = ((void*)0);


 VAR_11 = FUNC_6(VAR_6, VAR_7);
 if (VAR_11 != ((void*)0))
 {
  VAR_9 = VAR_1;
  goto final;
 }


 VAR_10 = FUNC_0(VAR_6, VAR_7);

 FUNC_3(VAR_10, VAR_7, VAR_8, FUNC_7(VAR_8));

 VAR_11 = FUNC_6(VAR_10, VAR_7);
 if (VAR_11 != ((void*)0))
 {
  VAR_9 = VAR_4;
  goto final;
 }

 FUNC_1(VAR_10);


 VAR_10 = FUNC_0(VAR_6, VAR_7);

 FUNC_4(VAR_10, VAR_7);

 VAR_11 = FUNC_6(VAR_10, VAR_7);
 if (VAR_11 != ((void*)0))
 {
  VAR_9 = VAR_5;
  goto final;
 }

 FUNC_1(VAR_10);


 VAR_10 = FUNC_0(VAR_6, VAR_7);

 FUNC_2(VAR_10, VAR_7);

 VAR_11 = FUNC_6(VAR_10, VAR_7);
 if (VAR_11 != ((void*)0))
 {
  VAR_9 = VAR_3;
  goto final;
 }

 FUNC_1(VAR_10);


 VAR_10 = FUNC_0(VAR_6, VAR_7);

 FUNC_3(VAR_10, VAR_7, VAR_8, FUNC_7(VAR_8));
 FUNC_4(VAR_10, VAR_7);
 FUNC_2(VAR_10, VAR_7);
 FUNC_4(VAR_10, VAR_7);

 VAR_11 = FUNC_6(VAR_10, VAR_7);
 if (VAR_11 != ((void*)0))
 {
  VAR_9 = VAR_2;
  goto final;
 }

final:
 FUNC_5(VAR_11);
 FUNC_1(VAR_10);
 return VAR_9;
}
