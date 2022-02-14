
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getout {struct getout* infile; struct getout* outfile; struct getout* url; struct getout* next; } ;
struct OperationConfig {struct getout* ftp_alternative_to_user; struct getout* ftp_account; struct getout* service_name; struct getout* proxy_service_name; struct getout* preproxy; int connect_to; int resolve; int telnet_options; int * mimecurrent; int * mimeroot; int * mimepost; int proxyheaders; int headers; int prequote; int postquote; int quote; struct getout* proto_default; struct getout* writeout; struct getout* unix_socket_path; struct getout* sasl_authzid; struct getout* oauth_bearer; struct getout* krblevel; struct getout* customrequest; struct getout* request_target; struct getout* engine; struct getout* hostpubmd5; struct getout* pubkey; struct getout* proxy_key_passwd; struct getout* key_passwd; struct getout* proxy_key_type; struct getout* key_type; struct getout* proxy_key; struct getout* key; struct getout* proxy_crlfile; struct getout* proxy_pinnedpubkey; struct getout* pinnedpubkey; struct getout* crlfile; struct getout* proxy_capath; struct getout* capath; struct getout* proxy_cacert; struct getout* cacert; struct getout* proxy_cert_type; struct getout* cert_type; struct getout* proxy_cert; struct getout* cert; struct getout* proxy_cipher_list; struct getout* cipher_list; struct getout* doh_url; int * url_out; int * url_get; int * url_last; struct getout* url_list; struct getout* netrc_file; struct getout* mail_auth; int mail_rcpt; struct getout* mail_from; struct getout* noproxy; struct getout* dns_servers; struct getout* dns_interface; struct getout* dns_ipv4_addr; struct getout* dns_ipv6_addr; struct getout* proxy; struct getout* proxyuserpwd; struct getout* proxy_tls_authtype; struct getout* proxy_tls_password; struct getout* proxy_tls_username; struct getout* tls_authtype; struct getout* tls_password; struct getout* tls_username; struct getout* userpwd; struct getout* range; struct getout* iface; struct getout* ftpport; struct getout* headerfile; struct getout* referer; struct getout* postfields; struct getout* cookiefile; struct getout* cookiejar; struct getout* cookie; struct getout* altsvc; struct getout* useragent; struct getout* egd_file; struct getout* random_file; } ;


 int FUNC_0 (struct getout*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct OperationConfig *VAR_0)
{
  struct getout *VAR_1;

  FUNC_0(VAR_0->random_file);
  FUNC_0(VAR_0->egd_file);
  FUNC_0(VAR_0->useragent);
  FUNC_0(VAR_0->altsvc);
  FUNC_0(VAR_0->cookie);
  FUNC_0(VAR_0->cookiejar);
  FUNC_0(VAR_0->cookiefile);

  FUNC_0(VAR_0->postfields);
  FUNC_0(VAR_0->referer);

  FUNC_0(VAR_0->headerfile);
  FUNC_0(VAR_0->ftpport);
  FUNC_0(VAR_0->iface);

  FUNC_0(VAR_0->range);

  FUNC_0(VAR_0->userpwd);
  FUNC_0(VAR_0->tls_username);
  FUNC_0(VAR_0->tls_password);
  FUNC_0(VAR_0->tls_authtype);
  FUNC_0(VAR_0->proxy_tls_username);
  FUNC_0(VAR_0->proxy_tls_password);
  FUNC_0(VAR_0->proxy_tls_authtype);
  FUNC_0(VAR_0->proxyuserpwd);
  FUNC_0(VAR_0->proxy);

  FUNC_0(VAR_0->dns_ipv6_addr);
  FUNC_0(VAR_0->dns_ipv4_addr);
  FUNC_0(VAR_0->dns_interface);
  FUNC_0(VAR_0->dns_servers);

  FUNC_0(VAR_0->noproxy);

  FUNC_0(VAR_0->mail_from);
  FUNC_2(VAR_0->mail_rcpt);
  FUNC_0(VAR_0->mail_auth);

  FUNC_0(VAR_0->netrc_file);

  VAR_1 = VAR_0->url_list;
  while(VAR_1) {
    struct getout *VAR_2 = VAR_1->next;
    FUNC_0(VAR_1->url);
    FUNC_0(VAR_1->outfile);
    FUNC_0(VAR_1->infile);
    FUNC_0(VAR_1);
    VAR_1 = VAR_2;
  }
  VAR_0->url_list = ((void*)0);
  VAR_0->url_last = ((void*)0);
  VAR_0->url_get = ((void*)0);
  VAR_0->url_out = ((void*)0);

  FUNC_0(VAR_0->doh_url);
  FUNC_0(VAR_0->cipher_list);
  FUNC_0(VAR_0->proxy_cipher_list);
  FUNC_0(VAR_0->cert);
  FUNC_0(VAR_0->proxy_cert);
  FUNC_0(VAR_0->cert_type);
  FUNC_0(VAR_0->proxy_cert_type);
  FUNC_0(VAR_0->cacert);
  FUNC_0(VAR_0->proxy_cacert);
  FUNC_0(VAR_0->capath);
  FUNC_0(VAR_0->proxy_capath);
  FUNC_0(VAR_0->crlfile);
  FUNC_0(VAR_0->pinnedpubkey);
  FUNC_0(VAR_0->proxy_pinnedpubkey);
  FUNC_0(VAR_0->proxy_crlfile);
  FUNC_0(VAR_0->key);
  FUNC_0(VAR_0->proxy_key);
  FUNC_0(VAR_0->key_type);
  FUNC_0(VAR_0->proxy_key_type);
  FUNC_0(VAR_0->key_passwd);
  FUNC_0(VAR_0->proxy_key_passwd);
  FUNC_0(VAR_0->pubkey);
  FUNC_0(VAR_0->hostpubmd5);
  FUNC_0(VAR_0->engine);
  FUNC_0(VAR_0->request_target);
  FUNC_0(VAR_0->customrequest);
  FUNC_0(VAR_0->krblevel);

  FUNC_0(VAR_0->oauth_bearer);
  FUNC_0(VAR_0->sasl_authzid);

  FUNC_0(VAR_0->unix_socket_path);
  FUNC_0(VAR_0->writeout);
  FUNC_0(VAR_0->proto_default);

  FUNC_2(VAR_0->quote);
  FUNC_2(VAR_0->postquote);
  FUNC_2(VAR_0->prequote);

  FUNC_2(VAR_0->headers);
  FUNC_2(VAR_0->proxyheaders);

  FUNC_1(VAR_0->mimepost);
  VAR_0->mimepost = ((void*)0);
  FUNC_3(VAR_0->mimeroot);
  VAR_0->mimeroot = ((void*)0);
  VAR_0->mimecurrent = ((void*)0);

  FUNC_2(VAR_0->telnet_options);
  FUNC_2(VAR_0->resolve);
  FUNC_2(VAR_0->connect_to);

  FUNC_0(VAR_0->preproxy);
  FUNC_0(VAR_0->proxy_service_name);
  FUNC_0(VAR_0->service_name);

  FUNC_0(VAR_0->ftp_account);
  FUNC_0(VAR_0->ftp_alternative_to_user);
}
