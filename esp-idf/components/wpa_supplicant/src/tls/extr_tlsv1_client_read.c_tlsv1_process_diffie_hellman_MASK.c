
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_client {scalar_t__ dh_p_len; int* dh_p; int dh_g_len; int* dh_g; scalar_t__ dh_ys_len; int* dh_ys; } ;


 int VAR_0 ;
 void* FUNC_0 (int const*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (struct tlsv1_client*) ;
 int FUNC_4 (int ,char*,int*,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct tlsv1_client *VAR_1,
     const u8 *VAR_2, size_t VAR_3)
{
 const u8 *VAR_4, *VAR_5;

 FUNC_3(VAR_1);

 VAR_4 = VAR_2;
 VAR_5 = VAR_2 + VAR_3;

 if (VAR_5 - VAR_4 < 3)
  goto fail;
 VAR_1->dh_p_len = FUNC_0(VAR_4);
 VAR_4 += 2;
 if (VAR_1->dh_p_len == 0 || VAR_5 - VAR_4 < (int) VAR_1->dh_p_len) {
  FUNC_5(VAR_0, "TLSv1: Invalid dh_p length %lu",
      (unsigned long) VAR_1->dh_p_len);
  goto fail;
 }
 VAR_1->dh_p = FUNC_1(VAR_1->dh_p_len);
 if (VAR_1->dh_p == ((void*)0))
  goto fail;
 FUNC_2(VAR_1->dh_p, VAR_4, VAR_1->dh_p_len);
 VAR_4 += VAR_1->dh_p_len;
 FUNC_4(VAR_0, "TLSv1: DH p (prime)",
      VAR_1->dh_p, VAR_1->dh_p_len);

 if (VAR_5 - VAR_4 < 3)
  goto fail;
 VAR_1->dh_g_len = FUNC_0(VAR_4);
 VAR_4 += 2;
 if (VAR_1->dh_g_len == 0 || VAR_5 - VAR_4 < (int) VAR_1->dh_g_len)
  goto fail;
 VAR_1->dh_g = FUNC_1(VAR_1->dh_g_len);
 if (VAR_1->dh_g == ((void*)0))
  goto fail;
 FUNC_2(VAR_1->dh_g, VAR_4, VAR_1->dh_g_len);
 VAR_4 += VAR_1->dh_g_len;
 FUNC_4(VAR_0, "TLSv1: DH g (generator)",
      VAR_1->dh_g, VAR_1->dh_g_len);
 if (VAR_1->dh_g_len == 1 && VAR_1->dh_g[0] < 2)
  goto fail;

 if (VAR_5 - VAR_4 < 3)
  goto fail;
 VAR_1->dh_ys_len = FUNC_0(VAR_4);
 VAR_4 += 2;
 if (VAR_1->dh_ys_len == 0 || VAR_5 - VAR_4 < (int) VAR_1->dh_ys_len)
  goto fail;
 VAR_1->dh_ys = FUNC_1(VAR_1->dh_ys_len);
 if (VAR_1->dh_ys == ((void*)0))
  goto fail;
 FUNC_2(VAR_1->dh_ys, VAR_4, VAR_1->dh_ys_len);
 VAR_4 += VAR_1->dh_ys_len;
 FUNC_4(VAR_0, "TLSv1: DH Ys (server's public value)",
      VAR_1->dh_ys, VAR_1->dh_ys_len);

 return 0;

fail:
 FUNC_5(VAR_0, "TLSv1: Processing DH params failed");
 FUNC_3(VAR_1);
 return -1;
}
