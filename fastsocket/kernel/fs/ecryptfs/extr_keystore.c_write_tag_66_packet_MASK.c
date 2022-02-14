
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct ecryptfs_crypt_stat {int key_size; char* key; } ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,size_t*) ;
 char* FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_5, u8 VAR_6,
      struct ecryptfs_crypt_stat *VAR_7, char **VAR_8,
      size_t *VAR_9)
{
 size_t VAR_10 = 0;
 size_t VAR_11;
 size_t VAR_12;
 size_t VAR_13 = 0;
 size_t VAR_14;
 char *VAR_15;
 int VAR_16;
 VAR_12 = (5 + VAR_0 + VAR_7->key_size);
 *VAR_8 = FUNC_2(VAR_12, VAR_3);
 VAR_15 = *VAR_8;
 if (!VAR_15) {
  FUNC_0(VAR_4, "Unable to allocate memory\n");
  VAR_16 = -VAR_2;
  goto out;
 }
 VAR_15[VAR_10++] = VAR_1;
 VAR_16 = FUNC_1(&VAR_15[VAR_10], VAR_0,
       &VAR_14);
 if (VAR_16) {
  FUNC_0(VAR_4, "Error generating tag 66 packet "
    "header; cannot generate packet length\n");
  goto out;
 }
 VAR_10 += VAR_14;
 FUNC_3(&VAR_15[VAR_10], VAR_5, VAR_0);
 VAR_10 += VAR_0;

 VAR_16 = FUNC_1(&VAR_15[VAR_10], VAR_7->key_size + 3,
       &VAR_14);
 if (VAR_16) {
  FUNC_0(VAR_4, "Error generating tag 66 packet "
    "header; cannot generate packet length\n");
  goto out;
 }
 VAR_10 += VAR_14;
 VAR_15[VAR_10++] = VAR_6;
 FUNC_3(&VAR_15[VAR_10], VAR_7->key, VAR_7->key_size);
 VAR_10 += VAR_7->key_size;
 for (VAR_11 = 0; VAR_11 < VAR_7->key_size; VAR_11++)
  VAR_13 += VAR_7->key[VAR_11];
 VAR_15[VAR_10++] = (VAR_13 / 256) % 256;
 VAR_15[VAR_10++] = (VAR_13 % 256);
 *VAR_9 = VAR_10;
out:
 return VAR_16;
}
