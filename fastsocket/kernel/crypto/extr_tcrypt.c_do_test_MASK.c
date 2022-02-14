
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_14)
{
 int VAR_15;
 int VAR_16 = 0;

 switch (VAR_14) {
 case 0:
  for (VAR_15 = 1; VAR_15 < 200; VAR_15++)
   VAR_16 += FUNC_4(VAR_15);
  break;

 case 1:
  VAR_16 += FUNC_0("md5");
  break;

 case 2:
  VAR_16 += FUNC_0("sha1");
  break;

 case 3:
  VAR_16 += FUNC_0("ecb(des)");
  VAR_16 += FUNC_0("cbc(des)");
  break;

 case 4:
  VAR_16 += FUNC_0("ecb(des3_ede)");
  VAR_16 += FUNC_0("cbc(des3_ede)");
  break;

 case 5:
  VAR_16 += FUNC_0("md4");
  break;

 case 6:
  VAR_16 += FUNC_0("sha256");
  break;

 case 7:
  VAR_16 += FUNC_0("ecb(blowfish)");
  VAR_16 += FUNC_0("cbc(blowfish)");
  break;

 case 8:
  VAR_16 += FUNC_0("ecb(twofish)");
  VAR_16 += FUNC_0("cbc(twofish)");
  break;

 case 9:
  VAR_16 += FUNC_0("ecb(serpent)");
  break;

 case 10:
  VAR_16 += FUNC_0("ecb(aes)");
  VAR_16 += FUNC_0("cbc(aes)");
  VAR_16 += FUNC_0("lrw(aes)");
  VAR_16 += FUNC_0("xts(aes)");
  VAR_16 += FUNC_0("ctr(aes)");
  VAR_16 += FUNC_0("rfc3686(ctr(aes))");
  break;

 case 11:
  VAR_16 += FUNC_0("sha384");
  break;

 case 12:
  VAR_16 += FUNC_0("sha512");
  break;

 case 13:
  VAR_16 += FUNC_0("deflate");
  break;

 case 14:
  VAR_16 += FUNC_0("ecb(cast5)");
  break;

 case 15:
  VAR_16 += FUNC_0("ecb(cast6)");
  break;

 case 16:
  VAR_16 += FUNC_0("ecb(arc4)");
  break;

 case 17:
  VAR_16 += FUNC_0("michael_mic");
  break;

 case 18:
  VAR_16 += FUNC_0("crc32c");
  break;

 case 19:
  VAR_16 += FUNC_0("ecb(tea)");
  break;

 case 20:
  VAR_16 += FUNC_0("ecb(xtea)");
  break;

 case 21:
  VAR_16 += FUNC_0("ecb(khazad)");
  break;

 case 22:
  VAR_16 += FUNC_0("wp512");
  break;

 case 23:
  VAR_16 += FUNC_0("wp384");
  break;

 case 24:
  VAR_16 += FUNC_0("wp256");
  break;

 case 25:
  VAR_16 += FUNC_0("ecb(tnepres)");
  break;

 case 26:
  VAR_16 += FUNC_0("ecb(anubis)");
  VAR_16 += FUNC_0("cbc(anubis)");
  break;

 case 27:
  VAR_16 += FUNC_0("tgr192");
  break;

 case 28:

  VAR_16 += FUNC_0("tgr160");
  break;

 case 29:
  VAR_16 += FUNC_0("tgr128");
  break;

 case 30:
  VAR_16 += FUNC_0("ecb(xeta)");
  break;

 case 31:
  VAR_16 += FUNC_0("pcbc(fcrypt)");
  break;

 case 32:
  VAR_16 += FUNC_0("ecb(camellia)");
  VAR_16 += FUNC_0("cbc(camellia)");
  break;
 case 33:
  VAR_16 += FUNC_0("sha224");
  break;

 case 34:
  VAR_16 += FUNC_0("salsa20");
  break;

 case 35:
  VAR_16 += FUNC_0("gcm(aes)");
  break;

 case 36:
  VAR_16 += FUNC_0("lzo");
  break;

 case 37:
  VAR_16 += FUNC_0("ccm(aes)");
  break;

 case 38:
  VAR_16 += FUNC_0("cts(cbc(aes))");
  break;

        case 39:
  VAR_16 += FUNC_0("rmd128");
  break;

        case 40:
  VAR_16 += FUNC_0("rmd160");
  break;

 case 41:
  VAR_16 += FUNC_0("rmd256");
  break;

 case 42:
  VAR_16 += FUNC_0("rmd320");
  break;

 case 43:
  VAR_16 += FUNC_0("ecb(seed)");
  break;

 case 44:
  VAR_16 += FUNC_0("zlib");
  break;

 case 45:
  VAR_16 += FUNC_0("rfc4309(ccm(aes))");
  break;

 case 100:
  VAR_16 += FUNC_0("hmac(md5)");
  break;

 case 101:
  VAR_16 += FUNC_0("hmac(sha1)");
  break;

 case 102:
  VAR_16 += FUNC_0("hmac(sha256)");
  break;

 case 103:
  VAR_16 += FUNC_0("hmac(sha384)");
  break;

 case 104:
  VAR_16 += FUNC_0("hmac(sha512)");
  break;

 case 105:
  VAR_16 += FUNC_0("hmac(sha224)");
  break;

 case 106:
  VAR_16 += FUNC_0("xcbc(aes)");
  break;

 case 107:
  VAR_16 += FUNC_0("hmac(rmd128)");
  break;

 case 108:
  VAR_16 += FUNC_0("hmac(rmd160)");
  break;

 case 109:
  VAR_16 += FUNC_0("vmac(aes)");
  break;

 case 150:
  VAR_16 += FUNC_0("ansi_cprng");
  break;

 case 200:
  FUNC_2("ecb(aes)", VAR_2, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("ecb(aes)", VAR_0, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("cbc(aes)", VAR_2, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("cbc(aes)", VAR_0, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("lrw(aes)", VAR_2, VAR_6, ((void*)0), 0,
    VAR_10);
  FUNC_2("lrw(aes)", VAR_0, VAR_6, ((void*)0), 0,
    VAR_10);
  FUNC_2("xts(aes)", VAR_2, VAR_6, ((void*)0), 0,
    VAR_11);
  FUNC_2("xts(aes)", VAR_0, VAR_6, ((void*)0), 0,
    VAR_11);
  break;

 case 201:
  FUNC_2("ecb(des3_ede)", VAR_2, VAR_6,
    VAR_3, VAR_1,
    VAR_9);
  FUNC_2("ecb(des3_ede)", VAR_0, VAR_6,
    VAR_3, VAR_1,
    VAR_9);
  FUNC_2("cbc(des3_ede)", VAR_2, VAR_6,
    VAR_3, VAR_1,
    VAR_9);
  FUNC_2("cbc(des3_ede)", VAR_0, VAR_6,
    VAR_3, VAR_1,
    VAR_9);
  break;

 case 202:
  FUNC_2("ecb(twofish)", VAR_2, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("ecb(twofish)", VAR_0, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("cbc(twofish)", VAR_2, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("cbc(twofish)", VAR_0, VAR_6, ((void*)0), 0,
    VAR_7);
  break;

 case 203:
  FUNC_2("ecb(blowfish)", VAR_2, VAR_6, ((void*)0), 0,
      VAR_13);
  FUNC_2("ecb(blowfish)", VAR_0, VAR_6, ((void*)0), 0,
      VAR_13);
  FUNC_2("cbc(blowfish)", VAR_2, VAR_6, ((void*)0), 0,
      VAR_13);
  FUNC_2("cbc(blowfish)", VAR_0, VAR_6, ((void*)0), 0,
      VAR_13);
  break;

 case 204:
  FUNC_2("ecb(des)", VAR_2, VAR_6, ((void*)0), 0,
      VAR_12);
  FUNC_2("ecb(des)", VAR_0, VAR_6, ((void*)0), 0,
      VAR_12);
  FUNC_2("cbc(des)", VAR_2, VAR_6, ((void*)0), 0,
      VAR_12);
  FUNC_2("cbc(des)", VAR_0, VAR_6, ((void*)0), 0,
      VAR_12);
  break;

 case 205:
  FUNC_2("ecb(camellia)", VAR_2, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("ecb(camellia)", VAR_0, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("cbc(camellia)", VAR_2, VAR_6, ((void*)0), 0,
    VAR_7);
  FUNC_2("cbc(camellia)", VAR_0, VAR_6, ((void*)0), 0,
    VAR_7);
  break;

 case 206:
  FUNC_2("salsa20", VAR_2, VAR_6, ((void*)0), 0,
      VAR_8);
  break;

 case 300:


 case 301:
  FUNC_3("md4", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 302:
  FUNC_3("md5", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 303:
  FUNC_3("sha1", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 304:
  FUNC_3("sha256", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 305:
  FUNC_3("sha384", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 306:
  FUNC_3("sha512", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 307:
  FUNC_3("wp256", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 308:
  FUNC_3("wp384", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 309:
  FUNC_3("wp512", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 310:
  FUNC_3("tgr128", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 311:
  FUNC_3("tgr160", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 312:
  FUNC_3("tgr192", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 313:
  FUNC_3("sha224", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 314:
  FUNC_3("rmd128", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 315:
  FUNC_3("rmd160", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 316:
  FUNC_3("rmd256", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 317:
  FUNC_3("rmd320", VAR_6, VAR_4);
  if (VAR_5 > 300 && VAR_5 < 400) break;

 case 399:
  break;

 case 1000:
  FUNC_1();
  break;
 }

 return VAR_16;
}
